#pragma once

#ifdef synapse_networking_export_mode
#define synapse_networking_dll _declspec(dllexport)
#else
#define synapse_networking_dll _declspec(dllimport)
#endif