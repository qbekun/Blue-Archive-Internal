#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_GET_SPACEBEFORE_OFFSET UNITYSDK_OFFSET(0x9DCF260)
#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_SET_SPACEBEFORE_OFFSET UNITYSDK_OFFSET(0x9DCF270)
#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_GET_SPACEAFTER_OFFSET UNITYSDK_OFFSET(0x9DCF280)
#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_SET_SPACEAFTER_OFFSET UNITYSDK_OFFSET(0x9DCF290)
#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF2A0)
#define TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCF2C0)

namespace TriInspector
{
	inline static constexpr unsigned int PropertySpaceAttribute_TypeDefinitionIndex = 37846;

	class PropertySpaceAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Single _SpaceBefore_k__BackingField; // 0x10
		::System::Single _SpaceAfter_k__BackingField; // 0x14

		::System::Single get_SpaceBefore()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_GET_SPACEBEFORE_OFFSET))(nullptr);
		}

		::System::Void set_SpaceBefore(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_SET_SPACEBEFORE_OFFSET))(arg, nullptr);
		}

		::System::Single get_SpaceAfter()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_GET_SPACEAFTER_OFFSET))(nullptr);
		}

		::System::Void set_SpaceAfter(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_SET_SPACEAFTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_PROPERTYSPACEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

