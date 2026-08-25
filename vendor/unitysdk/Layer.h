#pragma once
#include "unitysdk.h"

#define LAYER_SETLAYERCOLLISIONSTATE_OFFSET UNITYSDK_OFFSET(0x1FB1EF0)
#define LAYER_ISIGNORECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FB1F00)
#define LAYER_COLLISIONIGNOREALL_OFFSET UNITYSDK_OFFSET(0x1FB1F10)
#define LAYER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB1F70)

	inline static constexpr unsigned int Layer_TypeDefinitionIndex = 2902;

	class Layer : public Il2CppObject
	{
	public:
		::System::Int32 Default; // 0x0
		::System::Int32 TransparentFX; // 0x4
		::System::Int32 IgnoreRaycast; // 0x8
		::System::Int32 Water; // 0xC
		::System::Int32 UI; // 0x10
		::System::Int32 Player; // 0x14
		::System::Int32 LetterBox; // 0x18
		::System::Int32 Unit; // 0x1C
		::System::Int32 Obstacle; // 0x20
		::System::Int32 Projectile; // 0x24
		::System::Int32 UIBackground; // 0x28
		::System::Int32 UIAlwaysVisible; // 0x2C
		::System::Int32 Map; // 0x30
		::System::Int32 ScenePPV; // 0x34
		::System::Int32 CafeStencil; // 0x38
		::System::Int32 UIOverlay3D; // 0x3C
		::System::Int32 UI3D; // 0x40
		::System::Int32 NoRender; // 0x44
		::System::Int32 CutSceneSpecial1; // 0x48
		::System::Int32 ExSkillCutScene; // 0x4C
		::System::Int32 ExSkillArea; // 0x50
		::System::Int32 CafeBatchOutline; // 0x54
		::System::Int32 HexaMap; // 0x58
		::System::Int32 HexaGround; // 0x5C
		::System::Int32 HexaTile; // 0x60
		::System::Int32 PostProcessing; // 0x64
		::System::Int32 InGameBackGround; // 0x68

		::System::Void SetLayerCollisionState(::System::Int32 arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYER_SETLAYERCOLLISIONSTATE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean IsIgnoreCollision(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LAYER_ISIGNORECOLLISION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CollisionIgnoreAll(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + LAYER_COLLISIONIGNOREALL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAYER_.CCTOR_OFFSET))(nullptr);
		}

	};

