from ctypes import windll, byref, Structure, wintypes

class SYSTEM_INFO(Structure):
    _fields_ = [("GetPhysicallyInstalledSystemMemory", wintypes.ULONG)]
sys = SYSTEM_INFO()
core = windll.kernel32
core.GetPhysicallyInstalledSystemMemory(byref(sys))
print("%s: %s (0x%x)" % ("RAM", sys.GetPhysicallyInstalledSystemMemory, sys.GetPhysicallyInstalledSystemMemory))
