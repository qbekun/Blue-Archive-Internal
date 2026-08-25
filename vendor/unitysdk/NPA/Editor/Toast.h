#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class Toast; }

#define NPA_EDITOR_TOAST_MAKETEXT_OFFSET UNITYSDK_OFFSET(0x9DA7E40)
#define NPA_EDITOR_TOAST_SHOW_OFFSET UNITYSDK_OFFSET(0x9DA80F0)
#define NPA_EDITOR_TOAST_UPDATE_OFFSET UNITYSDK_OFFSET(0x9DA8250)
#define NPA_EDITOR_TOAST_SETALPHA_OFFSET UNITYSDK_OFFSET(0x9DA8110)
#define NPA_EDITOR_TOAST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA83F0)
#define NPA_EDITOR_TOAST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DA8480)

namespace NPA::Editor
{
	inline static constexpr unsigned int Toast_TypeDefinitionIndex = 26372;

	class Toast : public Il2CppObject
	{
	public:
		::System::Int32 LENGTH_SHORT; // 0x0
		::System::Int32 LENGTH_LONG; // 0x4
		::NPA::Editor::Toast* instance; // 0x8
		Il2CppObject* items; // 0x18
		::System::Single elapsed; // 0x20
		::System::Boolean fadeInStarted; // 0x24
		::System::Single fadeInRatio; // 0x28
		::System::Single fadeOutRatio; // 0x2C

		::NPA::Editor::Toast* makeText(::System::String* str, ::System::Int32 arg)
		{
			return (return (::NPA::Editor::Toast*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_MAKETEXT_OFFSET))(str, arg, nullptr);
		}

		::System::Void show()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_SHOW_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_SETALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_TOAST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

