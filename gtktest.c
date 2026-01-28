//
// Created by CRYPTNITORIAN on 15/01/2026.
#include <gtk/gtk.h>
#include <stdio.h>
int count=0;

void end_prog(GtkWidget *wid,gpointer ptr) {

    gtk_main_quit();
 }

void count_button(GtkWidget *wid,gpointer ptr)
{
  char buffer[50];
    count++;
    sprintf(buffer,"you clicked %d times",count);
    gtk_label_set_text(GTK_LABEL(ptr),buffer);
}


int main (int argc, char *argv[])
 {
     gtk_init (&argc, &argv);
     GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);

     GtkWidget *btn= gtk_button_new_with_label("CLOSE window");

    GtkWidget *lbl= gtk_label_new("my new labelling");

     g_signal_connect(btn,"clicked",G_CALLBACK(end_prog),NULL);
     g_signal_connect(win,"destroy",G_CALLBACK(end_prog),NULL);
    GtkWidget *btn2= gtk_button_new_with_label("count button");
    g_signal_connect(btn2,"clicked",G_CALLBACK(count_button),lbl);

    GtkWidget *boox=gtk_vbox_new(FALSE,5);

    gtk_box_pack_start(GTK_BOX(boox),lbl,!FALSE,!FALSE,0);
    gtk_box_pack_start(GTK_BOX(boox),btn2,!FALSE,!FALSE,0);
    gtk_box_pack_start(GTK_BOX(boox),btn,!FALSE,!FALSE,0);
     gtk_container_add(GTK_CONTAINER(win),boox);
     gtk_widget_show_all(win);
     // gtk_widget_show (wind);
     gtk_main ();
 }