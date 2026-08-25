#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINEATTRIBUTEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E1C0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpineAttributeBase_TypeDefinitionIndex = 35364;

	class SpineAttributeBase : public Il2CppObject
	{
	public:
		::System::String* dataField; // 0x18
		::System::String* startsWith; // 0x20
		::System::Boolean includeNone; // 0x28
		::System::Boolean fallbackToTextField; // 0x29
		::System::Boolean avoidGenericMenu; // 0x2A

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEATTRIBUTEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

