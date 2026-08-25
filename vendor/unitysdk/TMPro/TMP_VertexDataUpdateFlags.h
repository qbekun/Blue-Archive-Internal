#pragma once
#include "../unitysdk.h"

namespace TMPro { class TMP_VertexDataUpdateFlags; }

namespace TMPro
{
	inline static constexpr unsigned int TMP_VertexDataUpdateFlags_TypeDefinitionIndex = 33618;

	class TMP_VertexDataUpdateFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::TMPro::TMP_VertexDataUpdateFlags* None; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* Vertices; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* Uv0; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* Uv2; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* Uv4; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* Colors32; // 0x0
		::TMPro::TMP_VertexDataUpdateFlags* All; // 0x0

	};
}

