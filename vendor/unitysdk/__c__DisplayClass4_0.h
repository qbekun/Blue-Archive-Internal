#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class ResourcePreloader; }
namespace MX::MinigameShooting { class SkillData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace MX::MinigameShooting { class LogicEffect; }

#define <>C__DISPLAYCLASS4_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x147DDD0)
#define <>C__DISPLAYCLASS4_0__PRELOAD_B__6_OFFSET UNITYSDK_OFFSET(0x147DDE0)
#define <>C__DISPLAYCLASS4_0__PRELOAD_B__7_OFFSET UNITYSDK_OFFSET(0x147DF00)
#define <>C__DISPLAYCLASS4_0__PRELOAD_B__8_OFFSET UNITYSDK_OFFSET(0x147DF10)
#define <>C__DISPLAYCLASS4_0__PRELOAD_B__9_OFFSET UNITYSDK_OFFSET(0x147DF20)
#define <>C__DISPLAYCLASS4_0__PRELOAD_G__CHECKSKILLDATA|0_OFFSET UNITYSDK_OFFSET(0x147DE00)
#define <>C__DISPLAYCLASS4_0__PRELOAD_G__ADD|1_OFFSET UNITYSDK_OFFSET(0x147DF30)
#define <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDLOGIC|2_OFFSET UNITYSDK_OFFSET(0x147E0E0)
#define <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDSKILLDATAS|3_OFFSET UNITYSDK_OFFSET(0x147E1F0)
#define <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDOBSTACLEDATA|4_OFFSET UNITYSDK_OFFSET(0x147E300)

	inline static constexpr unsigned int <>c__DisplayClass4_0_TypeDefinitionIndex = 15174;

	class <>c__DisplayClass4_0 : public Il2CppObject
	{
	public:
		::System::Int32 skillComplete; // 0x10
		::System::Int32 complete; // 0x14
		::MX::MinigameShooting::ResourcePreloader* __4__this; // 0x18
		Il2CppObject* __9__6; // 0x20
		Il2CppObject* __9__7; // 0x28
		Il2CppObject* __9__8; // 0x30
		Il2CppObject* __9__9; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Preload_b__6(::MX::MinigameShooting::SkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_B__6_OFFSET))(arg, nullptr);
		}

		::System::Void _Preload_b__7(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_B__7_OFFSET))(arg, nullptr);
		}

		::System::Void _Preload_b__8(::UnityEngine::ParticleSystem* arg)
		{
			((::System::Void(*)(::UnityEngine::ParticleSystem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_B__8_OFFSET))(arg, nullptr);
		}

		::System::Void _Preload_b__9(::MX::MinigameShooting::LogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::LogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_B__9_OFFSET))(arg, nullptr);
		}

		::System::Void _Preload_g__CheckSkillData|0(::MX::MinigameShooting::SkillData* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::SkillData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_G__CHECKSKILLDATA|0_OFFSET))(arg, nullptr);
		}

		::System::Void _Preload_g__Add|1(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_G__ADD|1_OFFSET))(str, arg, nullptr);
		}

		::System::Void _Preload_g__AddLogic|2(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDLOGIC|2_OFFSET))(str, nullptr);
		}

		::System::Void _Preload_g__AddSkillDatas|3(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDSKILLDATAS|3_OFFSET))(str, nullptr);
		}

		::System::Void _Preload_g__AddObstacleData|4(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS4_0__PRELOAD_G__ADDOBSTACLEDATA|4_OFFSET))(str, nullptr);
		}

	};

