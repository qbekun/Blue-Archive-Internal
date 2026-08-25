#pragma once
#include "../../unitysdk.h"

namespace Spine::Unity { class MeshGenerator; }

#define SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV3BUFFER_OFFSET UNITYSDK_OFFSET(0x96191F0)
#define SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV2BUFFER_OFFSET UNITYSDK_OFFSET(0x9619280)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorBuffers_TypeDefinitionIndex = 35354;

	class MeshGeneratorBuffers : public Il2CppObject
	{
	public:
		::System::Int32 vertexCount; // 0x10
		::Il2CppArray<::System::Object*>* vertexBuffer; // 0x18
		::Il2CppArray<::System::Object*>* uvBuffer; // 0x20
		::Il2CppArray<::System::Object*>* colorBuffer; // 0x28
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x30

		::Il2CppArray<::System::Object*>* get_uv3Buffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV3BUFFER_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_uv2Buffer()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV2BUFFER_OFFSET))(nullptr);
		}

	};
}

