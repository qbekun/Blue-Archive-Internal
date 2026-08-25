#pragma once
#include "unitysdk.h"

class IPropAnimationVisual;

#define PROPANIMATIONVISUALMANAGER_CLEARPROPANIMATIONVISUAL_OFFSET UNITYSDK_OFFSET(0x10AA240)
#define PROPANIMATIONVISUALMANAGER_GETPOROPANIMATIONVISUAL_OFFSET UNITYSDK_OFFSET(0x10AA290)
#define PROPANIMATIONVISUALMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10AA300)
#define PROPANIMATIONVISUALMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AA380)
#define PROPANIMATIONVISUALMANAGER_ADDPROPANIMATIONVISUAL_OFFSET UNITYSDK_OFFSET(0x10A9E40)

	inline static constexpr unsigned int PropAnimationVisualManager_TypeDefinitionIndex = 883;

	class PropAnimationVisualManager : public ::ToyWebViewShared::Messages::RequestDeleteCookie
	{
	public:
		Il2CppObject* propAnimationTable; // 0x20

		::System::Void ClearPropAnimationVisual()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUALMANAGER_CLEARPROPANIMATIONVISUAL_OFFSET))(nullptr);
		}

		IPropAnimationVisual* GetPoropAnimationVisual(::System::Int32 arg)
		{
			return ((IPropAnimationVisual*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUALMANAGER_GETPOROPANIMATIONVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUALMANAGER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUALMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddPropAnimationVisual(::System::Int32 arg, IPropAnimationVisual* arg2)
		{
			((::System::Void(*)(::System::Int32, IPropAnimationVisual*, ::PVOID))((::PBYTE)hIl2Cpp + PROPANIMATIONVISUALMANAGER_ADDPROPANIMATIONVISUAL_OFFSET))(arg, arg2, nullptr);
		}

	};

