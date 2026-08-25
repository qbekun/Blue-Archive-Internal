#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class RigidbodyConstraints; }
namespace UnityEngine { class CollisionDetectionMode; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class RigidbodyInterpolation; }
namespace UnityEngine { class ForceMode; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class RaycastHit; }
namespace UnityEngine { class QueryTriggerInteraction; }
namespace UnityEngine { class RaycastHit&; }
namespace UnityEngine { class Quaternion&; }

#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A1850)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A18F0)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A1970)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A1A10)
#define UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET UNITYSDK_OFFSET(0xA2A1A90)
#define UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET UNITYSDK_OFFSET(0xA2A1AD0)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0xA2A1B20)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0xA2A1B60)
#define UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET UNITYSDK_OFFSET(0xA2A1BB0)
#define UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET UNITYSDK_OFFSET(0xA2A1BF0)
#define UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET UNITYSDK_OFFSET(0xA2A1C40)
#define UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0xA2A1C90)
#define UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0xA2A1CD0)
#define UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A1D10)
#define UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A1D50)
#define UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0xA2A1DA0)
#define UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0xA2A1DE0)
#define UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0xA2A1E20)
#define UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0xA2A1E60)
#define UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xA2A1EA0)
#define UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xA2A1EE0)
#define UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0xA2A1F20)
#define UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0xA2A1F60)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xA2A1FA0)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xA2A2040)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xA2A20C0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0xA2A2160)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0xA2A21F0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0xA2A2270)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0xA2A2310)
#define UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0xA2A2390)
#define UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0xA2A23D0)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA2A2410)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA2A24B0)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA2A2530)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA2A25C0)
#define UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0xA2A2640)
#define UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0xA2A2680)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0xA2A26C0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0xA2A2700)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA2A2740)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xA2A2780)
#define UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A27D0)
#define UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A2810)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0xA2A2860)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0xA2A28E0)
#define UNITYENGINE_RIGIDBODY_SLEEP_OFFSET UNITYSDK_OFFSET(0xA2A2960)
#define UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0xA2A29A0)
#define UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET UNITYSDK_OFFSET(0xA2A29E0)
#define UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0xA2A2A20)
#define UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET UNITYSDK_OFFSET(0xA2A2A60)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A2AA0)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A2B60)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0xA2A2C20)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0xA2A2C60)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2CA0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2D40)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2D90)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2DF0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2E40)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2EE0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2F30)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0xA2A2F90)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0xA2A2FE0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0xA2A3080)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0xA2A30D0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0xA2A3130)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0xA2A3180)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0xA2A3220)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0xA2A3270)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0xA2A32D0)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0xA2A3320)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0xA2A33C0)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0xA2A3430)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0xA2A34F0)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0xA2A3580)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0xA2A3600)
#define UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0xA2A36A0)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0xA2A3750)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0xA2A3860)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0xA2A3A00)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0xA2A3A30)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0xA2A3A70)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0xA2A3B30)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0xA2A3C70)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0xA2A3CA0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A3CD0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A3CE0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A3CF0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A3D00)
#define UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0xA2A3D10)
#define UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0xA2A3D60)
#define UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0xA2A3D70)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A3D80)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A3DC0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A3E00)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xA2A3E40)
#define UNITYENGINE_RIGIDBODY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A3E80)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A18B0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A1930)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A19D0)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A1A50)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2000)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2080)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2120)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A21B0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2230)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A22D0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2350)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2470)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A24F0)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2580)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2600)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A28A0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2920)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2B10)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2BD0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2CF0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A2E90)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3030)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A31D0)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3370)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3490)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3650)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3800)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2A3AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody_TypeDefinitionIndex = 37333;

	class Rigidbody : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* get_velocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_velocity(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_angularVelocity()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_angularVelocity(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_drag()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET))(nullptr);
		}

		::System::Void set_drag(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET))(arg, nullptr);
		}

		::System::Single get_angularDrag()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET))(nullptr);
		}

		::System::Void set_angularDrag(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET))(arg, nullptr);
		}

		::System::Single get_mass()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET))(nullptr);
		}

		::System::Void set_mass(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDensity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useGravity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET))(nullptr);
		}

		::System::Void set_useGravity(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxDepenetrationVelocity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_maxDepenetrationVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isKinematic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET))(nullptr);
		}

		::System::Void set_isKinematic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_freezeRotation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET))(nullptr);
		}

		::System::Void set_freezeRotation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RigidbodyConstraints* get_constraints()
		{
			return (return (::UnityEngine::RigidbodyConstraints*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Void set_constraints(::UnityEngine::RigidbodyConstraints* arg)
		{
			((::System::Void(*)(::UnityEngine::RigidbodyConstraints*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::CollisionDetectionMode* get_collisionDetectionMode()
		{
			return (return (::UnityEngine::CollisionDetectionMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET))(nullptr);
		}

		::System::Void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode* arg)
		{
			((::System::Void(*)(::UnityEngine::CollisionDetectionMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_centerOfMass()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET))(nullptr);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_worldCenterOfMass()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET))(nullptr);
		}

		::UnityEngine::Quaternion* get_inertiaTensorRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET))(nullptr);
		}

		::System::Void set_inertiaTensorRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_inertiaTensor()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET))(nullptr);
		}

		::System::Void set_inertiaTensor(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_detectCollisions()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET))(nullptr);
		}

		::System::Void set_detectCollisions(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_position(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* get_rotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RigidbodyInterpolation* get_interpolation()
		{
			return (return (::UnityEngine::RigidbodyInterpolation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET))(nullptr);
		}

		::System::Void set_interpolation(::UnityEngine::RigidbodyInterpolation* arg)
		{
			((::System::Void(*)(::UnityEngine::RigidbodyInterpolation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_solverIterations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET))(nullptr);
		}

		::System::Void set_solverIterations(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET))(arg, nullptr);
		}

		::System::Single get_sleepThreshold()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET))(nullptr);
		}

		::System::Void set_sleepThreshold(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET))(arg, nullptr);
		}

		::System::Single get_maxAngularVelocity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_maxAngularVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void MovePosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void Sleep()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SLEEP_OFFSET))(nullptr);
		}

		::System::Boolean IsSleeping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET))(nullptr);
		}

		::System::Void WakeUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET))(nullptr);
		}

		::System::Void ResetCenterOfMass()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET))(nullptr);
		}

		::System::Void ResetInertiaTensor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetRelativePointVelocity(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPointVelocity(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_solverVelocityIterations()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET))(nullptr);
		}

		::System::Void set_solverVelocityIterations(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void AddForce(::UnityEngine::Vector3* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForce(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void AddForce(::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddForce(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector3* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRelativeForce(::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddRelativeForce(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddTorque(::UnityEngine::Vector3* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTorque(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(arg, nullptr);
		}

		::System::Void AddTorque(::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddTorque(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddRelativeTorque(::UnityEngine::Vector3* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRelativeTorque(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(arg, nullptr);
		}

		::System::Void AddRelativeTorque(::System::Single arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddRelativeTorque(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExplosionForce(::System::Single arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void AddExplosionForce(::System::Single arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddExplosionForce(::System::Single arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_ClosestPointOnBounds(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* ClosestPointOnBounds(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::RaycastHit* SweepTest(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg, bool&* arg)
		{
			return (return (::UnityEngine::RaycastHit*(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SweepTest(::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SweepTest(::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg, ::System::Single arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SweepTest(::UnityEngine::Vector3* arg, ::UnityEngine::RaycastHit&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Internal_SweepTestAll(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SweepTestAll(::UnityEngine::Vector3* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SweepTestAll(::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* SweepTestAll(::UnityEngine::Vector3* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET))(arg, nullptr);
		}

		::System::Single get_sleepVelocity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_sleepVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Single get_sleepAngularVelocity()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET))(nullptr);
		}

		::System::Void set_sleepAngularVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetMaxAngularVelocity(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_useConeFriction()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET))(nullptr);
		}

		::System::Void set_useConeFriction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_solverIterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_solverIterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_solverVelocityIterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_solverVelocityIterationCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_angularVelocity_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_angularVelocity_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_centerOfMass_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_centerOfMass_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_worldCenterOfMass_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_inertiaTensorRotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_inertiaTensorRotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_inertiaTensor_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_inertiaTensor_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void MovePosition_Injected(::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void MoveRotation_Injected(::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void GetRelativePointVelocity_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetPointVelocity_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForce_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRelativeForce_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTorque_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRelativeTorque_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForceAtPosition_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddExplosionForce_Injected(::System::Single arg, ::UnityEngine::Vector3&* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::ForceMode* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector3&*, ::System::Single, ::System::Single, ::UnityEngine::ForceMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_ClosestPointOnBounds_Injected(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SweepTest_Injected(::UnityEngine::Vector3&* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg, bool&* arg, ::UnityEngine::RaycastHit&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, bool&*, ::UnityEngine::RaycastHit&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Internal_SweepTestAll_Injected(::UnityEngine::Vector3&* arg, ::System::Single arg, ::UnityEngine::QueryTriggerInteraction* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3&*, ::System::Single, ::UnityEngine::QueryTriggerInteraction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

