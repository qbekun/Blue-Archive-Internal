#pragma once
#include "unitysdk.h"

class UIEquipmentGrowth_Transcendence;
namespace UnityEngine { class Animation; }

#define <LEVELUPRENEWAL>D__46_.CTOR_OFFSET UNITYSDK_OFFSET(0x240A3D0)
#define <LEVELUPRENEWAL>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x240E0E0)
#define <LEVELUPRENEWAL>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x240E0F0)
#define <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x240E330)
#define <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x240E340)
#define <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x240E390)

	inline static constexpr unsigned int <LevelUpRenewal>d__46_TypeDefinitionIndex = 5458;

	class <LevelUpRenewal>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEquipmentGrowth_Transcendence* __4__this; // 0x20
		::System::Int64 serverId; // 0x28
		::UnityEngine::Animation* _anim_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LEVELUPRENEWAL>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

