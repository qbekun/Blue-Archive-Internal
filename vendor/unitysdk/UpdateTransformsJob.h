#pragma once
#include "unitysdk.h"

namespace Unity::Mathematics { class quaternion; }
namespace UnityEngine::Jobs { class TransformAccess; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Matrix4x4; }

#define UPDATETRANSFORMSJOB_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA0431C0)
#define UPDATETRANSFORMSJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA043430)
#define UPDATETRANSFORMSJOB_DISTANCEBETWEENQUATERNIONS_OFFSET UNITYSDK_OFFSET(0xA043D00)
#define UPDATETRANSFORMSJOB_GETDECALPROJECTBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA043D40)

	inline static constexpr unsigned int UpdateTransformsJob_TypeDefinitionIndex = 32617;

	class UpdateTransformsJob : public Il2CppObject
	{
	public:
		::Unity::Mathematics::quaternion* k_MinusYtoZRotation; // 0x0
		Il2CppObject* positions; // 0x10
		Il2CppObject* rotations; // 0x20
		Il2CppObject* scales; // 0x30
		Il2CppObject* dirty; // 0x40
		Il2CppObject* scaleModes; // 0x50
		Il2CppObject* sizeOffsets; // 0x60
		Il2CppObject* decalToWorlds; // 0x70
		Il2CppObject* normalToWorlds; // 0x80
		Il2CppObject* boundingSpheres; // 0x90
		::System::Single minDistance; // 0xA0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UPDATETRANSFORMSJOB_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Execute(::System::Int32 arg, ::UnityEngine::Jobs::TransformAccess* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Jobs::TransformAccess*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATETRANSFORMSJOB_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single DistanceBetweenQuaternions(::Unity::Mathematics::quaternion* arg, ::Unity::Mathematics::quaternion* arg)
		{
			return (return (::System::Single(*)(::Unity::Mathematics::quaternion*, ::Unity::Mathematics::quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATETRANSFORMSJOB_DISTANCEBETWEENQUATERNIONS_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::BoundingSphere* GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4* arg)
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATETRANSFORMSJOB_GETDECALPROJECTBOUNDINGSPHERE_OFFSET))(arg, nullptr);
		}

	};

