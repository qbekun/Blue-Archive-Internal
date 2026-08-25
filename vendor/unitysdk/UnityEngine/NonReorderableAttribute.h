#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_NONREORDERABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CBE0)

namespace UnityEngine
{
	inline static constexpr unsigned int NonReorderableAttribute_TypeDefinitionIndex = 31121;

	class NonReorderableAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NONREORDERABLEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

