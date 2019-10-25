using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace PlanetApp
{
	[XamlCompilation(XamlCompilationOptions.Compile)]
	public partial class PlanetScanPage : ContentPage
	{
		public PlanetScanPage ()
		{
			InitializeComponent ();
		}

        private void ScanBtn_Clicked(object sender, EventArgs e)
        {
            
        }

        private async void LoadBtn_Clicked(object sender, EventArgs e)
        {
            await Navigation.PushAsync(new LoadPlanetPage());
        }
    }
}