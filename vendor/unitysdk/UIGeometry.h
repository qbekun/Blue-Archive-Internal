#pragma once
#include "unitysdk.h"

class OnCustomWrite;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Matrix4x4; }

#define UIGEOMETRY_GET_HASVERTICES_OFFSET UNITYSDK_OFFSET(0x2071870)
#define UIGEOMETRY_GET_HASTRANSFORMED_OFFSET UNITYSDK_OFFSET(0x20718B0)
#define UIGEOMETRY_CLEAR_OFFSET UNITYSDK_OFFSET(0x2071910)
#define UIGEOMETRY_APPLYTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20719B0)
#define UIGEOMETRY_WRITETOBUFFERS_OFFSET UNITYSDK_OFFSET(0x2071DE0)
#define UIGEOMETRY_WRITETOBUFFERS_OFFSET UNITYSDK_OFFSET(0x20725D0)
#define UIGEOMETRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2072750)

	inline static constexpr unsigned int UIGeometry_TypeDefinitionIndex = 142;

	class UIGeometry : public Il2CppObject
	{
	public:
		Il2CppObject* verts; // 0x10
		Il2CppObject* uvs; // 0x18
		Il2CppObject* clipUVs; // 0x20
		Il2CppObject* cols; // 0x28
		OnCustomWrite* onCustomWrite; // 0x30
		Il2CppObject* mRtpVerts; // 0x38
		::UnityEngine::Vector3* mRtpNormal; // 0x40
		::UnityEngine::Vector4* mRtpTan; // 0x4C

		::System::Boolean get_hasVertices()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_GET_HASVERTICES_OFFSET))(nullptr);
		}

		::System::Boolean get_hasTransformed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_GET_HASTRANSFORMED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ApplyTransform(::UnityEngine::Matrix4x4* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_APPLYTRANSFORM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void WriteToBuffers(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_WRITETOBUFFERS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void WriteToBuffers(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject* arg5, Il2CppObject* arg6, Il2CppObject* arg7)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_WRITETOBUFFERS_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEOMETRY_.CTOR_OFFSET))(nullptr);
		}

	};

