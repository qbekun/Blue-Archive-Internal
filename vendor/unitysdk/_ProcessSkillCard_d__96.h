#pragma once
#include "unitysdk.h"

class UISkillCard;
namespace MX::Logic::Battles { class O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c; }
namespace MX::Logic::Battles { class SkillCardState; }
class <>c__DisplayClass96_0;

#define <PROCESSSKILLCARD>D__96_.CTOR_OFFSET UNITYSDK_OFFSET(0x223D410)
#define <PROCESSSKILLCARD>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x223E700)
#define <PROCESSSKILLCARD>D__96_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x223E710)
#define <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x223FF60)
#define <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x223FF70)
#define <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x223FFC0)

	inline static constexpr unsigned int <ProcessSkillCard>d__96_TypeDefinitionIndex = 4475;

	class <ProcessSkillCard>d__96 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISkillCard* __4__this; // 0x20
		::MX::Logic::Battles::O62dbaf47331b6f99fedd218f5096959e643297fc365acf681560548111b1962c* skillCard; // 0x28
		::MX::Logic::Battles::SkillCardState* state; // 0x30
		<>c__DisplayClass96_0* __8__1; // 0x38
		::System::Boolean _isTextureSet_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSKILLCARD>D__96_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

