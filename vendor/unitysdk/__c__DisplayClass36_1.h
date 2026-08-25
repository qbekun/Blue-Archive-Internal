#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class ObstacleInfo; }
class <>c__DisplayClass36_0;
namespace UnityEngine { class GameObject; }

#define <>C__DISPLAYCLASS36_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1472CC0)
#define <>C__DISPLAYCLASS36_1__LOADGROUP_B__2_OFFSET UNITYSDK_OFFSET(0x1472CD0)

	inline static constexpr unsigned int <>c__DisplayClass36_1_TypeDefinitionIndex = 15131;

	class <>c__DisplayClass36_1 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::ObstacleInfo* obstacleData; // 0x10
		<>c__DisplayClass36_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS36_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadGroup_b__2(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS36_1__LOADGROUP_B__2_OFFSET))(arg, nullptr);
		}

	};

