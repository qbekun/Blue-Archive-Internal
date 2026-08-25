#pragma once
#include "unitysdk.h"

class UICharacterGrowth_LevelUpEstimation;
namespace UnityEngine { class Animation; }

#define <CO_LEVELUPDIRECTING>D__50_.CTOR_OFFSET UNITYSDK_OFFSET(0x22DB8E0)
#define <CO_LEVELUPDIRECTING>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x22DB900)
#define <CO_LEVELUPDIRECTING>D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x22DB910)
#define <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22DBDB0)
#define <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x22DBDC0)
#define <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x22DBE10)

	inline static constexpr unsigned int <co_LevelupDirecting>d__50_TypeDefinitionIndex = 4846;

	class <co_LevelupDirecting>d__50 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICharacterGrowth_LevelUpEstimation* __4__this; // 0x20
		::UnityEngine::Animation* _anim_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LEVELUPDIRECTING>D__50_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

