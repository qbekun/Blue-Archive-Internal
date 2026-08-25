#pragma once
#include "../unitysdk.h"

#define SPINE_INHERITENUM_.CTOR_OFFSET UNITYSDK_OFFSET(0x95ABFF0)
#define SPINE_INHERITENUM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95AC000)

namespace Spine
{
	inline static constexpr unsigned int InheritEnum_TypeDefinitionIndex = 35032;

	class InheritEnum : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Values; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITENUM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_INHERITENUM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

