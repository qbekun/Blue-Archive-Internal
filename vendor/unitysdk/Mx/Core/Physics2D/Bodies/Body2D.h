#pragma once
#include "../../../../unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class DirectionRotator; }
namespace UnityEngine { class Vector2; }
namespace MX::Core::Physics2D::Shapes { class Shape; }
namespace MX::Core::Physics2D::Shapes { class Circle; }
namespace MX::Core::Physics2D::Bodies { class Body2D; }

#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_BODYRADIUS_OFFSET UNITYSDK_OFFSET(0x1023A60)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1023A90)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1023CB0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1024160)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x1024590)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_POSITION2D_OFFSET UNITYSDK_OFFSET(0x10245A0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x10245B0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x10245C0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1024980)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x10249A0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x10249B0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x10249C0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x10249D0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x10249E0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x10249F0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1024A00)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_INVERSEMASS_OFFSET UNITYSDK_OFFSET(0x1024A10)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x1024A20)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_COLLISION_OFFSET UNITYSDK_OFFSET(0x1024A30)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISIONPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1024A40)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_COLLISIONPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1024A50)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_SETCOLLISIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1024A60)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISIONANGLEDISTANCE_OFFSET UNITYSDK_OFFSET(0x1024B80)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_ISCONTINOUSMOVING_OFFSET UNITYSDK_OFFSET(0x1024B90)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_PREVIOUSBOUNDINGCIRCLE_OFFSET UNITYSDK_OFFSET(0x1024BF0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTBOUNDINGCIRCLE_OFFSET UNITYSDK_OFFSET(0x1024C00)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1024C10)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1025600)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x10256A0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET UNITYSDK_OFFSET(0x1024DD0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVE_OFFSET UNITYSDK_OFFSET(0x1025990)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_WARP_OFFSET UNITYSDK_OFFSET(0x1025B00)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_WARPBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1025C70)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVEBYFORCE_OFFSET UNITYSDK_OFFSET(0x1025D30)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVEBYFORCE_OFFSET UNITYSDK_OFFSET(0x1025D90)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_RESERVESETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1025EB0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1025FB0)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_STOP_OFFSET UNITYSDK_OFFSET(0x1026590)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_ISCOLLIDENOW_OFFSET UNITYSDK_OFFSET(0x1026630)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_ISCOLLIDE_OFFSET UNITYSDK_OFFSET(0x1026670)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATECOLLISIONPOSITION_OFFSET UNITYSDK_OFFSET(0x1024380)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATECOLLISIONDIRECTION_OFFSET UNITYSDK_OFFSET(0x1024260)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_GETCURRENTFRAMEMOVINGPOSITIONBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1026890)
#define MX_CORE_PHYSICS2D_BODIES_BODY2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1026900)

namespace MX::Core::Physics2D::Bodies
{
	inline static constexpr unsigned int Body2D_TypeDefinitionIndex = 12809;

	class Body2D : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::DirectionRotator* dirRotator; // 0x10
		::UnityEngine::Vector2* _Position2D_k__BackingField; // 0x18
		::UnityEngine::Vector2* acceleration; // 0x20
		::UnityEngine::Vector2* velocity; // 0x28
		Il2CppObject* getCurrentFrameFunc; // 0x30
		::System::Single _CurrentSpeed_k__BackingField; // 0x38
		::System::Single _MaxSpeed_k__BackingField; // 0x3C
		::System::Single _MaxAngularVelocity_k__BackingField; // 0x40
		::System::Single _mass_k__BackingField; // 0x44
		::System::Single _inverseMass_k__BackingField; // 0x48
		::MX::Core::Physics2D::Shapes::Shape* _Collision_k__BackingField; // 0x50
		::UnityEngine::Vector2* _CollisionPositionOffset_k__BackingField; // 0x58
		::System::Single _collisionAngleDistance_k__BackingField; // 0x60
		::MX::Core::Physics2D::Shapes::Circle* _PreviousBoundingCircle_k__BackingField; // 0x68
		::MX::Core::Physics2D::Shapes::Circle* _CurrentBoundingCircle_k__BackingField; // 0x70
		::System::Int32 lastPreviousBondingCircleUpdateFrame; // 0x78
		::UnityEngine::Vector2* lastWarpByPlatformPosition; // 0x7C
		::System::Int32 lastWarpByPlatformFrame; // 0x84

		::System::Single get_BodyRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_BODYRADIUS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Forward()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_FORWARD_OFFSET))(nullptr);
		}

		::System::Void set_Forward(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_FORWARD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Right()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_RIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Position2D()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_POSITION2D_OFFSET))(nullptr);
		}

		::System::Void set_Position2D(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_POSITION2D_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Velocity()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_Velocity(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_VELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTFRAME_OFFSET))(nullptr);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTSPEED_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_CURRENTSPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MAXSPEED_OFFSET))(nullptr);
		}

		::System::Void set_MaxSpeed(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_MAXSPEED_OFFSET))(arg, nullptr);
		}

		::System::Single get_MaxAngularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MAXANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_MaxAngularVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_MAXANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_MASS_OFFSET))(nullptr);
		}

		::System::Single get_inverseMass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_INVERSEMASS_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Shape* get_Collision()
		{
			return ((::MX::Core::Physics2D::Shapes::Shape*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISION_OFFSET))(nullptr);
		}

		::System::Void set_Collision(::MX::Core::Physics2D::Shapes::Shape* arg)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_COLLISION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_CollisionPositionOffset()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISIONPOSITIONOFFSET_OFFSET))(nullptr);
		}

		::System::Void set_CollisionPositionOffset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SET_COLLISIONPOSITIONOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void SetCollisionOffset(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_SETCOLLISIONOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Single get_collisionAngleDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_COLLISIONANGLEDISTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsContinousMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_ISCONTINOUSMOVING_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_PreviousBoundingCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_PREVIOUSBOUNDINGCIRCLE_OFFSET))(nullptr);
		}

		::MX::Core::Physics2D::Shapes::Circle* get_CurrentBoundingCircle()
		{
			return ((::MX::Core::Physics2D::Shapes::Circle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GET_CURRENTBOUNDINGCIRCLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Core::Physics2D::Shapes::Shape* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Core::Physics2D::Shapes::Shape* arg, ::UnityEngine::Vector2* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Core::Physics2D::Shapes::Shape* arg, ::UnityEngine::Vector2* arg2, ::UnityEngine::Vector2* arg3, ::UnityEngine::Vector2* arg4, Il2CppObject* arg5)
		{
			((::System::Void(*)(::MX::Core::Physics2D::Shapes::Shape*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void Move(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Warp(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_WARP_OFFSET))(arg, nullptr);
		}

		::System::Void WarpByPlatform(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_WARPBYPLATFORM_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByForce(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVEBYFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void MoveByForce(::System::Single arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_MOVEBYFORCE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ReserveSetDirection(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_RESERVESETDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDirection(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATEDIRECTION_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_STOP_OFFSET))(nullptr);
		}

		::System::Boolean IsCollideNow(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_ISCOLLIDENOW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCollide(::MX::Core::Physics2D::Bodies::Body2D* arg)
		{
			return ((::System::Boolean(*)(::MX::Core::Physics2D::Bodies::Body2D*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_ISCOLLIDE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateCollisionPosition(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATECOLLISIONPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCollisionDirection(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_UPDATECOLLISIONDIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetCurrentFrameMovingPositionByPlatform()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_GETCURRENTFRAMEMOVINGPOSITIONBYPLATFORM_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_PHYSICS2D_BODIES_BODY2D_TOSTRING_OFFSET))(nullptr);
		}

	};
}

