#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }

#define <>C__DISPLAYCLASS5_0`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS5_0`1__INSTANCEWITHLOADASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass5_0`1_TypeDefinitionIndex = 3888;

	class <>c__DisplayClass5_0`1 : public Il2CppObject
	{
	public:
		Il2CppObject* callback; // 0x0
		::UnityEngine::Transform* parent; // 0x0
		::System::Boolean setDefaultTransform; // 0x0
		::System::String* path; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_0`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InstanceWithLoadAsync_b__0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS5_0`1__INSTANCEWITHLOADASYNC_B__0_OFFSET))(arg, nullptr);
		}

	};

