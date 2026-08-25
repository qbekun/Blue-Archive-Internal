#pragma once
#include "unitysdk.h"

class <>c__DisplayClass10_0;
namespace MXField::UI { class FieldDialogElement; }

#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xE8BFC0)
#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE8BFE0)
#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE8BFF0)
#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE8C160)
#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE8C170)
#define <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE8C1C0)

	inline static constexpr unsigned int <<PlayEmojiOneShot>g__PlayAndRelease|0>d_TypeDefinitionIndex = 10669;

	class <<PlayEmojiOneShot>g__PlayAndRelease|0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass10_0* __4__this; // 0x20
		::MXField::UI::FieldDialogElement* _element_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<PLAYEMOJIONESHOT>G__PLAYANDRELEASE|0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

