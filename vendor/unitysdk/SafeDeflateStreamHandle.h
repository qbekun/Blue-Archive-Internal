#pragma once
#include "unitysdk.h"

#define SAFEDEFLATESTREAMHANDLE_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x9B8B680)
#define SAFEDEFLATESTREAMHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B600)
#define SAFEDEFLATESTREAMHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9B8B6D0)

	inline static constexpr unsigned int SafeDeflateStreamHandle_TypeDefinitionIndex = 29632;

	class SafeDeflateStreamHandle : public Il2CppObject
	{
	public:
		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEDEFLATESTREAMHANDLE_GET_ISINVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEDEFLATESTREAMHANDLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SAFEDEFLATESTREAMHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

