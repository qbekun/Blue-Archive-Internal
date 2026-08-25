#pragma once
#include "unitysdk.h"

#define POINTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0x553E00)

	inline static constexpr unsigned int PointExt_TypeDefinitionIndex = 21814;

	class PointExt : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* x; // 0x10
		::Il2CppArray<::System::Object*>* y; // 0x18
		::Il2CppArray<::System::Object*>* z; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POINTEXT_.CTOR_OFFSET))(nullptr);
		}

	};

