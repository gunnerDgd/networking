#pragma once

#define synapse_networking_opaque_declare(pName)\
	typedef struct pName { void* opaque; } pName;

#define synapse_networking_opaque_reference(pName)\
	(pName.opaque)

#define synapse_networking_opaque_cast(pObject, pType)\
	((pType)(pObject.opaque))

#define synapse_networking_opaque_init(pObject, pName, pValue)\
	pObject pName = { .opaque = pValue }