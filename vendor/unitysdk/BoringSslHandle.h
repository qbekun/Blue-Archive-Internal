#pragma once
#include "unitysdk.h"

#define BORINGSSLHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AB8390)
#define BORINGSSLHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x9ABA640)

	inline static constexpr unsigned int BoringSslHandle_TypeDefinitionIndex = 29112;

	class BoringSslHandle : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BORINGSSLHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ReleaseHandle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BORINGSSLHANDLE_RELEASEHANDLE_OFFSET))(nullptr);
		}

	};

