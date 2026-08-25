#pragma once
#include "../unitysdk.h"

#define SYSTEM_REFLECTIONONLYTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93AE0F0)
#define SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x93AE140)

namespace System
{
	inline static constexpr unsigned int ReflectionOnlyType_TypeDefinitionIndex = 23940;

	class ReflectionOnlyType : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::RuntimeTypeHandle* get_TypeHandle()
		{
			return (return (::System::RuntimeTypeHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTIONONLYTYPE_GET_TYPEHANDLE_OFFSET))(nullptr);
		}

	};
}

