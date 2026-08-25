#pragma once
#include "unitysdk.h"

#define POINTPRECOMP_.CTOR_OFFSET UNITYSDK_OFFSET(0x556540)

	inline static constexpr unsigned int PointPrecomp_TypeDefinitionIndex = 21815;

	class PointPrecomp : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* x; // 0x10
		::Il2CppArray<::System::Object*>* y; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTPRECOMP_.CTOR_OFFSET))(nullptr);
		}

	};

