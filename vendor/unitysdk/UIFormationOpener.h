#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }

#define UIFORMATIONOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3CA0)
#define UIFORMATIONOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C3CF0)

	inline static constexpr unsigned int UIFormationOpener_TypeDefinitionIndex = 6961;

	class UIFormationOpener : public Il2CppObject
	{
	public:
		::FlatData::EchelonExtensionType* extensionType; // 0x18
		Il2CppObject* loadingAction; // 0x20
		Il2CppObject* onOpenedAction; // 0x28

		::System::Void .ctor(::FlatData::EchelonExtensionType* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONOPENER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORMATIONOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

