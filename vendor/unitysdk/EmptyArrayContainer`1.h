#pragma once
#include "unitysdk.h"

#define EMPTYARRAYCONTAINER`1_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int EmptyArrayContainer`1_TypeDefinitionIndex = 31812;

	class EmptyArrayContainer`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Empty; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPTYARRAYCONTAINER`1_.CCTOR_OFFSET))(nullptr);
		}

	};

