#pragma once
#include "unitysdk.h"

class UIWorkAronaScene;

#define UIWORKSPINESET_.CTOR_OFFSET UNITYSDK_OFFSET(0xBDBB00)
#define UIWORKSPINESET_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xBDB0F0)

	inline static constexpr unsigned int UIWorkSpineSet_TypeDefinitionIndex = 8688;

	class UIWorkSpineSet : public Il2CppObject
	{
	public:
		::System::Int64 Id; // 0x10
		UIWorkAronaScene* Scene; // 0x18

		::System::Void .ctor(::System::Int64 arg, UIWorkAronaScene* arg2)
		{
			((::System::Void(*)(::System::Int64, UIWorkAronaScene*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORKSPINESET_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORKSPINESET_GET_ISVALID_OFFSET))(nullptr);
		}

	};

