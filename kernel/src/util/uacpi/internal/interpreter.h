#pragma once

#include <util/uacpi/types.h>
#include <util/uacpi/status.h>
#include <util/uacpi/internal/namespace.h>

enum uacpi_table_load_cause
{
    UACPI_TABLE_LOAD_CAUSE_LOAD_OP,
    UACPI_TABLE_LOAD_CAUSE_LOAD_TABLE_OP,
    UACPI_TABLE_LOAD_CAUSE_INIT,
    UACPI_TABLE_LOAD_CAUSE_HOST,
};

uacpi_status uacpi_execute_table(void *, enum uacpi_table_load_cause cause);
uacpi_status uacpi_osi(uacpi_handle handle, uacpi_object *retval);

uacpi_status uacpi_execute_control_method(
    uacpi_namespace_node *scope, uacpi_control_method *method,
    const uacpi_object_array *args, uacpi_object **ret);
