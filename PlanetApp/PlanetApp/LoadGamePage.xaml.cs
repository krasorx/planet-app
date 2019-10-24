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
	public partial class LoadGamePage : ContentPage
	{
		public LoadGamePage ()
		{
			InitializeComponent ();
		}

        private void MyPlanets_Clicked(object sender, EventArgs e)
        {
            PlanetCollection.IsVisible = !PlanetCollection.IsVisible;
        }

        private void Examples_Clicked(object sender, EventArgs e)
        {
            ExamplesCollection.IsVisible = !ExamplesCollection.IsVisible;
        }

        private void MySystems_Clicked(object sender, EventArgs e)
        {
            SystemsCollection.IsVisible = !SystemsCollection.IsVisible;
        }
    }
}