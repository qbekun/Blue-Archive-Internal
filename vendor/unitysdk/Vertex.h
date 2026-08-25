#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXPath { class GraphVertexTangentMode; }
namespace UnityEngine { class Quaternion; }

#define VERTEX_GET_TANGENTIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define VERTEX_SET_TANGENTOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VERTEX_GET_TANGENTOUT_OFFSET UNITYSDK_OFFSET(0x000000)
#define VERTEX_SET_TANGENTIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define VERTEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Vertex_TypeDefinitionIndex = 37993;

	class Vertex : public Il2CppObject
	{
	public:
		::System::Int32 id; // 0x0
		::UnityEngine::Vector3* position; // 0x0
		::MXPath::GraphVertexTangentMode* tangentMode; // 0x0
		::UnityEngine::Quaternion* rotation; // 0x0
		::System::Single tangentInLength; // 0x0
		::System::Single tangentOutLength; // 0x0
		Il2CppObject* userData; // 0x0

		::UnityEngine::Vector3* get_tangentIn()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTEX_GET_TANGENTIN_OFFSET))(nullptr);
		}

		::System::Void set_tangentOut(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + VERTEX_SET_TANGENTOUT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_tangentOut()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTEX_GET_TANGENTOUT_OFFSET))(nullptr);
		}

		::System::Void set_tangentIn(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + VERTEX_SET_TANGENTIN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VERTEX_.CTOR_OFFSET))(nullptr);
		}

	};

