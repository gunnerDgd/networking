#pragma once

#ifdef synapse_networking_export_mode
#define synapse_networking_export _declspec(dllexport)
#else
#define synapse_networking_export _declspec(dllimport)
#endif