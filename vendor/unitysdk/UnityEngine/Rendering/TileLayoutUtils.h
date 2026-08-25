#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class RectInt; }
namespace UnityEngine { class RectInt&; }

#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET UNITYSDK_OFFSET(0x9FDE8C0)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET UNITYSDK_OFFSET(0x9FDEBD0)
#define UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET UNITYSDK_OFFSET(0x9FDED70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int TileLayoutUtils_TypeDefinitionIndex = 34079;

	class TileLayoutUtils : public Il2CppObject
	{
	public:
		::System::Boolean TryLayoutByTiles(::UnityEngine::RectInt* arg, ::System::UInt32 arg, ::UnityEngine::RectInt&* arg, ::UnityEngine::RectInt&* arg, ::UnityEngine::RectInt&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectInt*, ::System::UInt32, ::UnityEngine::RectInt&*, ::UnityEngine::RectInt&*, ::UnityEngine::RectInt&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYTILES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryLayoutByRow(::UnityEngine::RectInt* arg, ::System::UInt32 arg, ::UnityEngine::RectInt&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectInt*, ::System::UInt32, ::UnityEngine::RectInt&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYROW_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean TryLayoutByCol(::UnityEngine::RectInt* arg, ::System::UInt32 arg, ::UnityEngine::RectInt&* arg, ::UnityEngine::RectInt&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::RectInt*, ::System::UInt32, ::UnityEngine::RectInt&*, ::UnityEngine::RectInt&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_TILELAYOUTUTILS_TRYLAYOUTBYCOL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

