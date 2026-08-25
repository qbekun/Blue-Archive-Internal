#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXField::Core::State { class IEntityState; }

#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_GETNAVMESHHEIGHT_OFFSET UNITYSDK_OFFSET(0xECC660)
#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xECC710)
#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_COMOVE_OFFSET UNITYSDK_OFFSET(0xECC720)
#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_UPDATE_OFFSET UNITYSDK_OFFSET(0xECC7B0)
#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_WARP_OFFSET UNITYSDK_OFFSET(0xECC920)
#define MXFIELD_DIRECTING_FIELDPLAYERLOCATION_ONPLAYERSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xECCAD0)

namespace MXField::Directing
{
	inline static constexpr unsigned int FieldPlayerLocation_TypeDefinitionIndex = 10912;

	class FieldPlayerLocation : public Il2CppObject
	{
	public:
		::System::Boolean isMoving; // 0x18

		::System::Single GetNavMeshHeight(::UnityEngine::Vector3* arg)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_GETNAVMESHHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoMove()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_COMOVE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Warp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_WARP_OFFSET))(nullptr);
		}

		::System::Void OnPlayerStateChanged(::MXField::Core::State::IEntityState* arg)
		{
			((::System::Void(*)(::MXField::Core::State::IEntityState*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_FIELDPLAYERLOCATION_ONPLAYERSTATECHANGED_OFFSET))(arg, nullptr);
		}

	};
}

