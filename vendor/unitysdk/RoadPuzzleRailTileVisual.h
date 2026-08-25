#pragma once
#include "unitysdk.h"

class RoadPuzzleRailTileData;
class RailTileVectorData;
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class Coroutine; }
class ShaderColorsAnimationData;

#define ROADPUZZLERAILTILEVISUAL_SETROTATION_OFFSET UNITYSDK_OFFSET(0x2085930)
#define ROADPUZZLERAILTILEVISUAL_DISABLEEDITMODEANIMATION_OFFSET UNITYSDK_OFFSET(0x2086220)
#define ROADPUZZLERAILTILEVISUAL_SETTILEPOSITION_OFFSET UNITYSDK_OFFSET(0x20862C0)
#define ROADPUZZLERAILTILEVISUAL_ENABLEEDITMODEANIMATION_OFFSET UNITYSDK_OFFSET(0x2086400)
#define ROADPUZZLERAILTILEVISUAL_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x2085800)
#define ROADPUZZLERAILTILEVISUAL_ROTATE_OFFSET UNITYSDK_OFFSET(0x20864C0)
#define ROADPUZZLERAILTILEVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0x2086590)
#define ROADPUZZLERAILTILEVISUAL_GETSPLINEPOINTS_OFFSET UNITYSDK_OFFSET(0x20867D0)
#define ROADPUZZLERAILTILEVISUAL_GETSHADERANIMATIONMATLIST_OFFSET UNITYSDK_OFFSET(0x2086670)
#define ROADPUZZLERAILTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x2086A00)

	inline static constexpr unsigned int RoadPuzzleRailTileVisual_TypeDefinitionIndex = 3442;

	class RoadPuzzleRailTileVisual : public Il2CppObject
	{
	public:
		RoadPuzzleRailTileData* Data; // 0x18
		RailTileVectorData* vectorData; // 0x20
		::UnityEngine::MeshRenderer* meshRenderer; // 0x28
		::UnityEngine::AudioSource* audioSource; // 0x30
		::UnityEngine::Coroutine* editAnimation; // 0x38
		ShaderColorsAnimationData* editShader; // 0x40
		::Il2CppArray<::System::Object*>* shaderAnimationMats; // 0x48

		::System::Void SetRotation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_SETROTATION_OFFSET))(nullptr);
		}

		::System::Void DisableEditModeAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_DISABLEEDITMODEANIMATION_OFFSET))(nullptr);
		}

		::System::Void SetTilePosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_SETTILEPOSITION_OFFSET))(nullptr);
		}

		::System::Void EnableEditModeAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_ENABLEEDITMODEANIMATION_OFFSET))(nullptr);
		}

		::System::Void ResetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_RESETPOSITION_OFFSET))(nullptr);
		}

		::System::Void Rotate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_ROTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSplinePoints(::System::Boolean arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_GETSPLINEPOINTS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetShaderAnimationMatList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_GETSHADERANIMATIONMATLIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

