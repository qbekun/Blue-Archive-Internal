#pragma once
#include "unitysdk.h"

class SkillTimelinePlayer;
class EntityVisual;
namespace MX::Logic::Skills { class SkillDataPack; }
class <>c__DisplayClass51_0;

#define <COPLAYCUTIN>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0x13C7070)
#define <COPLAYCUTIN>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13C8BF0)
#define <COPLAYCUTIN>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13C8C00)
#define <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C9AB0)
#define <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13C9AC0)
#define <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13C9B10)

	inline static constexpr unsigned int <CoPlayCutIn>d__51_TypeDefinitionIndex = 1048;

	class <CoPlayCutIn>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SkillTimelinePlayer* __4__this; // 0x20
		::System::Int32 timelineIndex; // 0x28
		EntityVisual* entityVisual; // 0x30
		::MX::Logic::Skills::SkillDataPack* skillData; // 0x38
		::System::Int32 formIndex; // 0x40
		<>c__DisplayClass51_0* __8__1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYCUTIN>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

