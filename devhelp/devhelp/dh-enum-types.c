
/* Generated data (by glib-mkenums) */

#include "dh-enum-types.h"
#include "dh-assistant.h"
#include "dh-assistant-view.h"
#include "dh-base.h"
#include "dh-book-manager.h"
#include "dh-book.h"
#include "dh-book-tree.h"
#include "dh-error.h"
#include "dh-keyword-model.h"
#include "dh-link.h"
#include "dh-search.h"
#include "dh-window.h"

GType
dh_error_get_type (void)
{
	static GType the_type = 0;

	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ DH_ERROR_FILE_NOT_FOUND,
			  "DH_ERROR_FILE_NOT_FOUND",
			  "file-not-found" },
			{ DH_ERROR_MALFORMED_BOOK,
			  "DH_ERROR_MALFORMED_BOOK",
			  "malformed-book" },
			{ DH_ERROR_INVALID_BOOK_TYPE,
			  "DH_ERROR_INVALID_BOOK_TYPE",
			  "invalid-book-type" },
			{ DH_ERROR_INTERNAL_ERROR,
			  "DH_ERROR_INTERNAL_ERROR",
			  "internal-error" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("DhError"),
				values);
	}
	return the_type;
}


GType
dh_link_type_get_type (void)
{
	static GType the_type = 0;

	if (the_type == 0)
	{
		static const GEnumValue values[] = {
			{ DH_LINK_TYPE_BOOK,
			  "DH_LINK_TYPE_BOOK",
			  "book" },
			{ DH_LINK_TYPE_PAGE,
			  "DH_LINK_TYPE_PAGE",
			  "page" },
			{ DH_LINK_TYPE_KEYWORD,
			  "DH_LINK_TYPE_KEYWORD",
			  "keyword" },
			{ DH_LINK_TYPE_FUNCTION,
			  "DH_LINK_TYPE_FUNCTION",
			  "function" },
			{ DH_LINK_TYPE_STRUCT,
			  "DH_LINK_TYPE_STRUCT",
			  "struct" },
			{ DH_LINK_TYPE_MACRO,
			  "DH_LINK_TYPE_MACRO",
			  "macro" },
			{ DH_LINK_TYPE_ENUM,
			  "DH_LINK_TYPE_ENUM",
			  "enum" },
			{ DH_LINK_TYPE_TYPEDEF,
			  "DH_LINK_TYPE_TYPEDEF",
			  "typedef" },
			{ 0, NULL, NULL }
		};
		the_type = g_enum_register_static (
				g_intern_static_string ("DhLinkType"),
				values);
	}
	return the_type;
}

GType
dh_link_flags_get_type (void)
{
	static GType the_type = 0;

	if (the_type == 0)
	{
		static const GFlagsValue values[] = {
			{ DH_LINK_FLAGS_NONE,
			  "DH_LINK_FLAGS_NONE",
			  "none" },
			{ DH_LINK_FLAGS_DEPRECATED,
			  "DH_LINK_FLAGS_DEPRECATED",
			  "deprecated" },
			{ 0, NULL, NULL }
		};
		the_type = g_flags_register_static (
				g_intern_static_string ("DhLinkFlags"),
				values);
	}
	return the_type;
}


GType
dh_open_link_flags_get_type (void)
{
	static GType the_type = 0;

	if (the_type == 0)
	{
		static const GFlagsValue values[] = {
			{ DH_OPEN_LINK_NEW_WINDOW,
			  "DH_OPEN_LINK_NEW_WINDOW",
			  "window" },
			{ DH_OPEN_LINK_NEW_TAB,
			  "DH_OPEN_LINK_NEW_TAB",
			  "tab" },
			{ 0, NULL, NULL }
		};
		the_type = g_flags_register_static (
				g_intern_static_string ("DhOpenLinkFlags"),
				values);
	}
	return the_type;
}


/* Generated data ends here */

