/*
 * Copyright 2020 Vincent Sanders <vince@netsurf-browser.org>
 * Copyright 2022 Steef Hegeman <mail@steefhegeman.com>
 *
 * This file is part of NetSurf.
 *
 * NetSurf is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * NetSurf is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file
 * about scheme bindings handler interface
 */

#ifndef NETSURF_CONTENT_FETCHERS_ABOUT_BINDINGS_H
#define NETSURF_CONTENT_FETCHERS_ABOUT_BINDINGS_H

/**
 * Handler to generate about scheme bindings page.
 *
 * \param ctx The fetcher context.
 * \return true if handled false if aborted.
 */
bool fetch_about_bindings_handler(struct fetch_about_context *ctx);

#endif
