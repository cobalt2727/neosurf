/* Generated by nsgenbind
 *
 * nsgenbind is published under the MIT Licence.
 * nsgenbind is similar to a compiler is a purely transformative tool which
 * explicitly makes no copyright claim on this generated output
 */

/* DukTape JavaScript bindings for NetSurf browser
 *
 * Copyright 2015 Vincent Sanders <vince@netsurf-browser.org>
 * This file is part of NetSurf, http://www.netsurf-browser.org/
 * Released under the terms of the MIT License,
 *        http://www.opensource.org/licenses/mit-license
 */

#include <dom/dom.h>

#include "utils/log.h"
#include "utils/nsurl.h"

#include "javascript/duktape/duktape.h"

struct browser_window;
struct html_content;
struct dom_node;
struct dom_element;
struct dom_document;
struct dom_html_element;
struct dom_node_character_data;
struct dom_node_text;
struct dom_node_list;
struct dom_node_comment;
struct dom_html_collection;
struct dom_html_br_element;


#include "duktape/binding.h"
#include "duktape/private.h"
#include "duktape/prototype.h"

#include "javascript/duktape/dukky.h"

static void dukky_html_olist_element___init(duk_context *ctx, html_olist_element_private_t *priv, struct dom_html_element *html_o_list_element)
{
	dukky_html_element___init(ctx, &priv->parent, html_o_list_element);
#line 12 "HTMLOListElement.bnd"
#line 48 "html_olist_element.c"
}

static void dukky_html_olist_element___fini(duk_context *ctx, html_olist_element_private_t *priv)
{
	dukky_html_element___fini(ctx, &priv->parent);
}

static duk_ret_t dukky_html_olist_element___constructor(duk_context *ctx)
{
	/* create private data and attach to instance */
	html_olist_element_private_t *priv = calloc(1, sizeof(*priv));
	if (priv == NULL) return 0;
	duk_push_pointer(ctx, priv);
	duk_put_prop_string(ctx, 0, dukky_magic_string_private);

	dukky_html_olist_element___init(ctx, priv, duk_get_pointer(ctx, 1));
	duk_set_top(ctx, 1);
	return 1;
}

static duk_ret_t dukky_html_olist_element___destructor(duk_context *ctx)
{
	html_olist_element_private_t *priv;
	duk_get_prop_string(ctx, 0, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop(ctx);
	if (priv == NULL) return 0;

	dukky_html_olist_element___fini(ctx, priv);
	free(priv);
	return 0;
}

static duk_ret_t dukky_html_olist_element_reversed_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_olist_element_reversed_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

	return 0;
}

static duk_ret_t dukky_html_olist_element_start_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 16 "HTMLOListElement.bnd"
#line 125 "html_olist_element.c"
	dom_long l;
	dom_exception exc;

	exc = dom_html_olist_element_get_start((struct dom_html_olist_element *)((node_private_t*)priv)->node, &l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_number(ctx, (duk_double_t)l);

	return 1;
}

static duk_ret_t dukky_html_olist_element_start_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 17 "HTMLOListElement.bnd"
#line 152 "html_olist_element.c"
	dom_exception exc;
	dom_long l;

	l = duk_get_int(ctx, 0);

	exc = dom_html_olist_element_set_start((struct dom_html_olist_element *)((node_private_t*)priv)->node, l);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_olist_element_type_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 18 "HTMLOListElement.bnd"
#line 179 "html_olist_element.c"
	dom_exception exc;
	dom_string *str;

	exc = dom_html_olist_element_get_type((struct dom_html_olist_element *)((node_private_t*)priv)->node, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	if (str != NULL) {
		duk_push_lstring(ctx,
			dom_string_data(str),
			dom_string_length(str));
		dom_string_unref(str);
	} else {
		duk_push_lstring(ctx, NULL, 0);
	}

	return 1;
}

static duk_ret_t dukky_html_olist_element_type_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 19 "HTMLOListElement.bnd"
#line 213 "html_olist_element.c"
	dom_exception exc;
	dom_string *str;
	duk_size_t slen;
	const char *s;
	s = duk_safe_to_lstring(ctx, 0, &slen);

	exc = dom_string_create((const uint8_t *)s, slen, &str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	exc = dom_html_olist_element_set_type((struct dom_html_olist_element *)((node_private_t*)priv)->node, str);
	dom_string_unref(str);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

static duk_ret_t dukky_html_olist_element_compact_getter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 14 "HTMLOListElement.bnd"
#line 247 "html_olist_element.c"
	dom_exception exc;
	bool b;

	exc = dom_html_olist_element_get_compact((struct dom_html_olist_element *)((node_private_t*)priv)->node, &b);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	duk_push_boolean(ctx, b);

	return 1;
}

static duk_ret_t dukky_html_olist_element_compact_setter(duk_context *ctx)
{
	/* Get private data for method */
	html_olist_element_private_t *priv = NULL;
	duk_push_this(ctx);
	duk_get_prop_string(ctx, -1, dukky_magic_string_private);
	priv = duk_get_pointer(ctx, -1);
	duk_pop_2(ctx);
	if (priv == NULL) {
		return 0; /* can do? No can do. */
	}

#line 15 "HTMLOListElement.bnd"
#line 274 "html_olist_element.c"
	dom_exception exc;
	bool b;

	b = duk_get_boolean(ctx, 0);

	exc = dom_html_olist_element_set_compact((struct dom_html_olist_element *)((node_private_t*)priv)->node, b);
	if (exc != DOM_NO_ERR) {
		return 0;
	}

	return 0;
}

duk_ret_t dukky_html_olist_element___proto(duk_context *ctx, void *udata)
{
	/* Set this prototype's prototype (left-parent) */
	/* get prototype */
	duk_get_global_string(ctx, dukky_magic_string_prototypes);
	duk_get_prop_string(ctx, -1, "\xFF\xFFNETSURF_DUKTAPE_PROTOTYPE_HTMLELEMENT");
	duk_replace(ctx, -2);
	duk_set_prototype(ctx, 0);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "reversed");
	duk_push_c_function(ctx, dukky_html_olist_element_reversed_getter, 0);
	duk_push_c_function(ctx, dukky_html_olist_element_reversed_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "start");
	duk_push_c_function(ctx, dukky_html_olist_element_start_getter, 0);
	duk_push_c_function(ctx, dukky_html_olist_element_start_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "type");
	duk_push_c_function(ctx, dukky_html_olist_element_type_getter, 0);
	duk_push_c_function(ctx, dukky_html_olist_element_type_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Add read/write property */
	duk_dup(ctx, 0);
	duk_push_string(ctx, "compact");
	duk_push_c_function(ctx, dukky_html_olist_element_compact_getter, 0);
	duk_push_c_function(ctx, dukky_html_olist_element_compact_setter, 1);
	duk_def_prop(ctx, -4, DUK_DEFPROP_HAVE_GETTER |
		DUK_DEFPROP_HAVE_SETTER |
		DUK_DEFPROP_HAVE_ENUMERABLE | DUK_DEFPROP_ENUMERABLE |
		DUK_DEFPROP_HAVE_CONFIGURABLE);
	duk_pop(ctx);

	/* Set the destructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_olist_element___destructor, 1);
	duk_set_finalizer(ctx, -2);
	duk_pop(ctx);

	/* Set the constructor */
	duk_dup(ctx, 0);
	duk_push_c_function(ctx, dukky_html_olist_element___constructor, 2);
	duk_put_prop_string(ctx, -2, "\xFF\xFFNETSURF_DUKTAPE_INIT");
	duk_pop(ctx);

	return 1; /* The prototype object */
}

