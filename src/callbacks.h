/* This file is part of GNOME Inform 7.
 * Copyright (c) 2006-2009 P. F. Chimento <philip.chimento@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#include <gnome.h>

/* Include all callback functions in other files, for interface.c */
#include "newdialog.h"
#include "tabindex.h"
#include "tabsettings.h"
#include "tabsource.h"
#include "findreplace.h"
#include "appwindow.h"
#include "welcomedialog.h"
#include "html.h"
#include "extwindow.h"
#include "prefs.h"
#include "tabgame.h"
#include "inspector.h"
#include "searchwindow.h"
#include "widgets.h"
#include "appmenu.h"
#include "apptoolbar.h"
#include "tabdocs.h"
#include "tabskein.h"

/* This is where Glade puts newly-created callback function prototypes. */

void on_show_last_command_activate(GtkMenuItem *menuitem, gpointer data);
void on_show_last_command_in_skein_activate(GtkMenuItem *menuitem, gpointer data);
void on_export_ifiction_record_activate(GtkMenuItem *menuitem, gpointer data);
