#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class SkillData; }
namespace MX::MinigameShooting { class Character; }
namespace MX::MinigameShooting { class CharacterState; }

#define <<COSHOT>G__SHOT|93_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1459430)
#define <<COSHOT>G__SHOT|93_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1459450)
#define <<COSHOT>G__SHOT|93_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1459460)
#define <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x145A4C0)
#define <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x145A4D0)
#define <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x145A520)

	inline static constexpr unsigned int <<CoShot>g__Shot|93_0>d_TypeDefinitionIndex = 15031;

	class <<CoShot>g__Shot|93_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::SkillData* data; // 0x20
		::MX::MinigameShooting::Character* __4__this; // 0x28
		::System::Boolean deathSkill; // 0x30
		::MX::MinigameShooting::CharacterState* _state_5__2; // 0x34
		::System::Int32 _i_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<COSHOT>G__SHOT|93_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

