#pragma once
#include "unitysdk.h"

class SkillTimelinePlayer;
class EntityVisual;
namespace MX::Logic::Skills { class SkillDataPack; }

#define <COOPENSKILLPORTRAITUI>D__56_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C7BA0)
#define <COOPENSKILLPORTRAITUI>D__56_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C9CD0)
#define <COOPENSKILLPORTRAITUI>D__56_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13C9CE0)
#define <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C9F90)
#define <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13C9FA0)
#define <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C9FF0)

	inline static constexpr unsigned int <CoOpenSkillPortraitUI>d__56_TypeDefinitionIndex = 1050;

	class <CoOpenSkillPortraitUI>d__56 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SkillTimelinePlayer* __4__this; // 0x20
		EntityVisual* entityVisual; // 0x28
		::MX::Logic::Skills::SkillDataPack* skillData; // 0x30
		::System::Int32 formIndex; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENSKILLPORTRAITUI>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

