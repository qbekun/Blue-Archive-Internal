#pragma once
#include "unitysdk.h"

namespace MX::Conquest { class ConquestObject; }
class HexaUIConquest;
class ConquestTileVisual;

#define CONQUESTOBJECTVISUAL_SETFOG_OFFSET UNITYSDK_OFFSET(0x1BEAD10)
#define CONQUESTOBJECTVISUAL_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x1BEAFF0)
#define CONQUESTOBJECTVISUAL_DESELECT_OFFSET UNITYSDK_OFFSET(0x1BEB0B0)
#define CONQUESTOBJECTVISUAL_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1BEB140)
#define CONQUESTOBJECTVISUAL_SELECT_OFFSET UNITYSDK_OFFSET(0x1BEB1C0)
#define CONQUESTOBJECTVISUAL_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x1BEB250)
#define CONQUESTOBJECTVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BEB310)
#define CONQUESTOBJECTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB320)
#define CONQUESTOBJECTVISUAL_INITIALIZERENDERER_OFFSET UNITYSDK_OFFSET(0x1BEAF20)

	inline static constexpr unsigned int ConquestObjectVisual_TypeDefinitionIndex = 1540;

	class ConquestObjectVisual : public Il2CppObject
	{
	public:
		::MX::Conquest::ConquestObject* Data; // 0x18
		HexaUIConquest* hexaUIConquest; // 0x20
		Il2CppObject* renderers; // 0x28

		::System::Void SetFog(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_SETFOG_OFFSET))(arg, nullptr);
		}

		::System::Void RotateRight()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_ROTATERIGHT_OFFSET))(nullptr);
		}

		::System::Void Deselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_DESELECT_OFFSET))(nullptr);
		}

		::System::Void RefreshState(ConquestTileVisual* arg)
		{
			((::System::Void(*)(ConquestTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_REFRESHSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Select()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_SELECT_OFFSET))(nullptr);
		}

		::System::Void RotateLeft()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_ROTATELEFT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeRenderer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTOBJECTVISUAL_INITIALIZERENDERER_OFFSET))(nullptr);
		}

	};

