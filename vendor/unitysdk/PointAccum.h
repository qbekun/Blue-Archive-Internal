#pragma once
#include "unitysdk.h"

#define POINTACCUM_.CTOR_OFFSET UNITYSDK_OFFSET(0x547D60)

	inline static constexpr unsigned int PointAccum_TypeDefinitionIndex = 21809;

	class PointAccum : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* x; // 0x10
		::Il2CppArray<::System::Object*>* y; // 0x18
		::Il2CppArray<::System::Object*>* z; // 0x20
		::Il2CppArray<::System::Object*>* u; // 0x28
		::Il2CppArray<::System::Object*>* v; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTACCUM_.CTOR_OFFSET))(nullptr);
		}

	};

