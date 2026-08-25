#pragma once
#include "../unitysdk.h"

#define SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0xA4FA0D0)

namespace System
{
	inline static constexpr unsigned int __Il2CppComObject_TypeDefinitionIndex = 38120;

	class __Il2CppComObject : public Il2CppObject
	{
	public:
		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM___IL2CPPCOMOBJECT_FINALIZE_OFFSET))(nullptr);
		}

	};
}

