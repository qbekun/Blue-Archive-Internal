#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCPlayerModel; }

#define <CO_LOADPLAYERVISUAL>D__123_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB49A0)
#define <CO_LOADPLAYERVISUAL>D__123_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB9CC0)
#define <CO_LOADPLAYERVISUAL>D__123_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDB9D20)
#define <CO_LOADPLAYERVISUAL>D__123___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDBA0D0)
#define <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBA120)
#define <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBA130)
#define <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBA180)

	inline static constexpr unsigned int <co_LoadPlayerVisual>d__123_TypeDefinitionIndex = 9982;

	class <co_LoadPlayerVisual>d__123 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28
		::MXUnderCover::UCPlayerModel* _model_5__3; // 0x40
		Il2CppObject* _op_5__4; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADPLAYERVISUAL>D__123_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

