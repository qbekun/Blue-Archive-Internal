#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_RENDERING_LISTCHANGEDEVENTARGS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ListChangedEventArgs`1_TypeDefinitionIndex = 33924;

	class ListChangedEventArgs`1 : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x0
		Il2CppObject* item; // 0x0

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LISTCHANGEDEVENTARGS`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

