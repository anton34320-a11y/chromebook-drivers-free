#include <windows.h>

// Стандартная точка входа для системного образа PE
BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    UNREFERENCED_PARAMETER(hinstDLL);
    UNREFERENCED_PARAMETER(fdwReason);
    UNREFERENCED_PARAMETER(lpvReserved);
    return TRUE;
}

// Заглушка точки инициализации службы PnP
int __stdcall DriverEntry(void* DriverObject, void* RegistryPath) {
    (void)DriverObject;
    (void)RegistryPath;
    return 0; // Возвращаем STATUS_SUCCESS
}
