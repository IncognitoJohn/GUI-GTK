//
// Created by CRYPTNITORIAN on 15/01/2026.
#include <gtk/gtk.h>
#include <stdio.h>


void end_prog(GtkWidget *wid,gpointer ptr) {

    gtk_main_quit();
 }

 int main (int argc, char *argv[])
 {
     gtk_init (&argc, &argv);
     GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
     GtkWidget *wind = gtk_window_new (GTK_WINDOW_POPUP);
     GtkWidget *btn= gtk_button_new_with_label("CLOSE window");



     g_signal_connect(btn,"clicked",G_CALLBACK(end_prog),NULL);
     g_signal_connect(win,"destroy",G_CALLBACK(end_prog),NULL);
     gtk_container_add(GTK_CONTAINER(win),btn);
     GtkWidget *lbl= gtk_label_new("my new labelling");
     gtk_container_add(GTK_CONTAINER(win),lbl);
     gtk_widget_show_all(win);
     // gtk_widget_show (wind);
     gtk_main ();
 }