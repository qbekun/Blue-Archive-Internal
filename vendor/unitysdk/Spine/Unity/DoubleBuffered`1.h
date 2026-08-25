#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_DOUBLEBUFFERED`1_GETCURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_DOUBLEBUFFERED`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_UNITY_DOUBLEBUFFERED`1_GETNEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Spine::Unity
{
	inline static constexpr unsigned int DoubleBuffered`1_TypeDefinitionIndex = 35352;

	class DoubleBuffered`1 : public Il2CppObject
	{
	public:
		Il2CppObject* a; // 0x0
		Il2CppObject* b; // 0x0
		::System::Boolean usingA; // 0x0

		Il2CppObject* GetCurrent()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_DOUBLEBUFFERED`1_GETCURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_DOUBLEBUFFERED`1_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNext()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_DOUBLEBUFFERED`1_GETNEXT_OFFSET))(nullptr);
		}

	};
}

