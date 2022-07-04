#pragma once

#ifdef synapse_networking_export_mode
#define synapse_networking_export _declspec(dllexport)
#else
#define synapse_networking_export _declspec(dllimport)
#endif

#ifdef synapse_networking_tcp_export_mode
#define synapse_networking_tcp_dll _declspec(dllexport)
#else
#define synapse_networking_tcp_dll _declspec(dllimport)
#endif

#ifdef synapse_networking_tcp_server_export_mode
#define synapse_networking_tcp_server_dll _declspec(dllexport)
#else
#define synapse_networking_tcp_server_dll _declspec(dllimport)
#endif